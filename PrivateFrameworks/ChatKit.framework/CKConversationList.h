/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class FTCConnectionHandler, NSMutableArray, CKConversation;

@interface CKConversationList : NSObject  {
    NSMutableArray *_trackedConversations;
    CKConversation *_pendingConversation;
    FTCConnectionHandler *_connectionHandler;
    BOOL _loadingConversations;
    BOOL _loadedConversations;
}

@property(readonly) BOOL loadingConversations;
@property(readonly) CKConversation * firstUnreadConversation;
@property(readonly) CKConversation * firstUnreadFilteredConversation;
@property(readonly) FTCConnectionHandler * connectionHandler;

+ (id)sharedConversationList;

- (void)resetCaches;
- (void)dealloc;
- (id)init;
- (id)_chatIdentifierForEntities:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)pendingConversationCreatingIfNecessary;
- (void)deleteConversationAtIndex:(int)arg1;
- (int)unreadFilteredConversationCount;
- (int)unreadConversationCount;
- (BOOL)hasActiveConversations;
- (id)activeConversations;
- (id)firstUnreadFilteredConversation;
- (id)firstUnreadConversation;
- (id)conversationForExistingChatWithAddresses:(id)arg1;
- (id)conversationForHandles:(id)arg1 create:(BOOL)arg2;
- (id)conversationForExistingChatWithGUID:(id)arg1;
- (int)_unreadConversationCount:(BOOL)arg1;
- (void)resort;
- (BOOL)loadingConversations;
- (void)_beginTrackingAllExistingChatsIfNeeded;
- (id)conversations;
- (id)_firstUnreadConversationWithFiltering:(BOOL)arg1;
- (id)conversationForExistingChatWithGroupID:(id)arg1;
- (BOOL)_shouldFilterForParticipants:(id)arg1;
- (id)_copyEntitiesForAddressStrings:(id)arg1;
- (void)stopTrackingConversation:(id)arg1;
- (BOOL)reloadStaleConversations;
- (void)_postConversationListChangedNotification;
- (id)_conversationForChat:(id)arg1;
- (id)_beginTrackingConversationWithChat:(id)arg1;
- (void)beginTrackingConversation:(id)arg1 forChat:(id)arg2;
- (id)_alreadyTrackedConversationForChat:(id)arg1;
- (void)_handleMemoryWarning:(id)arg1;
- (void)_handleRegistryDidLoadChatNotification:(id)arg1;
- (void)_handleRegistryWillUnregisterChatNotification:(id)arg1;
- (void)_handleRegistryDidRegisterChatNotification:(id)arg1;
- (void)_abChanged:(id)arg1;
- (id)connectionHandler;
- (id)conversationForRecipients:(id)arg1 create:(BOOL)arg2;
- (void)unpendConversation;
- (id)pendingConversation;
- (int)unreadCount;

@end