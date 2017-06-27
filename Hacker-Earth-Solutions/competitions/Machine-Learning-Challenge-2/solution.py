from sklearn import metrics
import pandas as pd
import numpy as np
from sklearn.svm import SVC
import time
print('import is completed')
train = pd.read_csv("D:\\machine practice\\Classification Techniques_011443_23_May_2017_10_14_17\\Classification Techniques\\Datasets\\train2.csv")
test = pd.read_csv("D:\\machine practice\\Classification Techniques_011443_23_May_2017_10_14_17\\Classification Techniques\\Datasets\\test.csv")
unix_cols = ['deadline','state_changed_at','launched_at','created_at']

#for x in unix_cols:
    #train[x] = train[x].apply(lambda k: time.ctime(k))
    #test[x] = test[x].apply(lambda k: time.ctime(k))
cols_to_use = ['name','desc']
len_feats = ['name_len','desc_len']
count_feats = ['name_count','desc_count']
print('Cleaning process is started')
for i in np.arange(2):
    train[len_feats[i]] = train[cols_to_use[i]].apply(str).apply(len)
    train[count_feats[i]] = train[cols_to_use[i]].apply(str).apply(lambda x: len(x.split(' ')))
    
train['keywords_len'] = train['keywords'].apply(str).apply(len)
train['keywords_count'] = train['keywords'].apply(str).apply(lambda x: len(x.split('-')))

for i in np.arange(2):
    test[len_feats[i]] = test[cols_to_use[i]].apply(str).apply(len)
    test[count_feats[i]] = test[cols_to_use[i]].apply(str).apply(lambda x: len(x.split(' ')))
    
test['keywords_len'] = test['keywords'].apply(str).apply(len)
test['keywords_count'] = test['keywords'].apply(str).apply(lambda x: len(x.split('-')))

from sklearn.preprocessing import LabelEncoder

feat = ['disable_communication','country']
for x in feat:
    le = LabelEncoder()
    le.fit(list(train[x].values) + list(test[x].values))
    train[x] = le.transform(list(train[x]))
    test[x] = le.transform(list(test[x].values))
	
cols_to_use = ['desc_len'
                 ,'keywords_len'
                 ,'desc_count'
                 ,'keywords_count']


target = train['final_status']

# data for modeling
k_train = train[cols_to_use]
k_test = test[cols_to_use]

h = .02  # step size in the mesh
print('starting svc')
svc = SVC(kernel='rbf', random_state=0, gamma=0.10, C=10)
svc.fit(k_train, target)
print('SVC fitting is completed')
predicts = svc.predict(k_test)
print('Predicted values is',predicts)

print('Training',svc.score(k_train, target,sample_weight=None))

nBsub = pd.DataFrame({'project_id':test['project_id'],'final_status':predicts})
nBsub = nBsub[['project_id','final_status']]
nBsub.to_csv("D:\\machine practice\\Classification Techniques_011443_23_May_2017_10_14_17\\Classification Techniques\\Datasets\\nBstarter.csv",index = False)