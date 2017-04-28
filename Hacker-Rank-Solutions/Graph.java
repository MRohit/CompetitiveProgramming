package Graph;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class Graph {
	
	public static final int WHITE = 0;
	public static final int GRAY = 1;
	public static final int BLACK = 2;
	public static final int MAX = 100;
	
	int time;
	int n;
	ArrayList<Integer> edges[];
	
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
		edges = (ArrayList<Integer>[])new ArrayList[n];
		for(int i=0;i<n;++i)
			edges[i] = new ArrayList<Integer>(n);
	}
	
	public void addEdge (int s,int d) {
		this.edges[s].add(d);
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
			int u = q.remove();
			System.out.print(u+" ");
			for(int i = 0;i<edges[u].size();++i) {
				int v = edges[u].get(i);
				if(color[v] == WHITE) {
					
					color[v] = GRAY;
					dist[v] = dist[u] + 1;
					q.add(v);
				}
			}
			color[u] = BLACK;
		}
		
	}
	public void DFSVisit(int u) {
		color[u] = GRAY;
		time++;
		dist[u] = time;
		System.out.print(u+" ");
		for(int i = 0;i<edges[u].size();++i) {
			int v = edges[u].get(i);
			if(color[v] == WHITE) {
				parent[v] = u;
				DFSVisit(v);
			}
		}
		color[u]=BLACK;
		time++;
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
