/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUDownloadManager, SSPreorderManager, NSString, NSArray, SUClientInterface;

@interface SUScriptDownloadQueue : SUScriptObject <SSDownloadManagerObserver, SSPreorderManagerObserver> {
    SUClientInterface *_clientInterface;
    SUDownloadManager *_downloadManager;
    SSPreorderManager *_preorderManager;
    NSString *_queueType;
}

@property(readonly) NSArray * downloads;
@property(readonly) NSString * queueType;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (id)downloads;
- (id)queueType;
- (id)initWithQueueType:(id)arg1 clientInterface:(id)arg2;
- (void)preorderManagerPreordersDidChange:(id)arg1;
- (void)checkQueue;
- (void)_tearDownQueues;
- (void)_setupManagersWithClientInterface:(id)arg1 queueType:(id)arg2;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)dealloc;
- (void)finalizeForWebScript;
- (id)attributeKeys;

@end