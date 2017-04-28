/*
 * Author: Rohit Mourya
 * Date: 28th April 2017
 * Graph Traversal using BFS and DFS.
 * Time Complexity: O(V + E)
 * */

package Graph;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

class Edge {
	// can add more attributes such as weight
	int s,d;
	Edge(int s,int d) {
		this.s = s;
		this.d = d;
	}
}
public class Graph {
	
	public static final int WHITE = 0;
	public static final int GRAY = 1;
	public static final int BLACK = 2;
	public static final int MAX = 100;
	
	int time;
	int n;
	ArrayList<Edge> edges[];
	
	int []color = new int[MAX];
	int []dist= new int[MAX];
	int []parent= new int[MAX];
	int []finish = new int[MAX];
	
	public Graph() {
		n=0;
		time = 0;
	}
	
	@SuppressWarnings("unchecked")
	public Graph(int n) {
		this.n=n;
		time = 0;
		//edges = new ArrayList<Integer>();
		edges = (ArrayList<Edge>[])new ArrayList[n];
		for(int i=0;i<n;++i)
			edges[i] = new ArrayList<Edge>(n);
	}
	
	public void addEdge (int s,int d) {
		Edge ed = new Edge (s,d);
		
		this.edges[ed.s].add(ed);
		
		// for undirected graph uncomment below line
		// this.edges[ed.d].add(ed);
	}
	
	public void BFS(int s) {
		
		Queue<Integer> q = new LinkedList<>();
		for(int i=0;i<n;++i){
			color[i] = WHITE;
			dist[i] = 0;
			parent[i] = -1;
		}
		
		color[s] = GRAY;
		dist[s] = 0;	
		parent[s] = -1;
		
		q.add(s);
		
		while(!q.isEmpty()) {
			// visit current vertex
			int u = q.remove();
			System.out.print(u+" ");
			
			for(int i = 0;i<edges[u].size();++i) {
				
				int v = edges[u].get(i).d;
				// if not visited
				if(color[v] == WHITE) {
					// mark as visited
					color[v] = GRAY;
					dist[v] = dist[u] + 1;
					parent[v] = u;
					q.add(v);
				}
			}
			// mark it as BLACK once all its adjacent nodes are explored
			color[u] = BLACK;
		}
		
	}
	public void DFSVisit(int u) {
		color[u] = GRAY;
		time++;
		// record discovery time
		dist[u] = time;
		System.out.print(u+" ");
		for(int i = 0;i<edges[u].size();++i) {
			int v = edges[u].get(i).d;
			if(color[v] == WHITE) {
				parent[v] = u;
				DFSVisit(v);
			}
		}
		color[u]=BLACK;
		time++;
		// record finishing time
		finish[u]=time;
	}
	public void DFS() {
		
		for(int i=0;i<n;++i){
			color[i] = WHITE;
			dist[i] = 0;
			parent[i] = -1;
			finish[i] = -1;
		}
		time = 0;
		
		for(int i=0;i<n;++i) {
			if(color[i] == WHITE) {
				DFSVisit(i);
			}
		}
		
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Graph g1 = new Graph(4);
		g1.addEdge(0, 1);
        g1.addEdge(0, 2);
        g1.addEdge(1, 2);
        g1.addEdge(2, 0);
        g1.addEdge(2, 3);
        g1.addEdge(3, 3);
        
        System.out.print("BFS Traversal:");
        g1.BFS(2);
        System.out.print("DFS Traversal:");
        g1.DFS();
        
	}

}
