/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSData, NSString;

@interface FTAcceptMessage : FTFaceTimeMessage <NSCopying> {
    NSData *_selfPushToken;
    NSNumber *_selfNATType;
    NSData *_selfBlob;
    NSData *_selfNATIP;
    NSString *_peerID;
    NSData *_peerPushToken;
    NSNumber *_peerNATType;
    NSData *_peerBlob;
    NSData *_peerNATIP;
    NSNumber *_relayType;
    NSData *_relayConnectionId;
    NSData *_relayTransactionIdAlloc;
    NSData *_relayTokenAllocReq;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
}

@property(copy) NSData * selfPushToken;
@property(copy) NSNumber * selfNATType;
@property(copy) NSData * selfBlob;
@property(copy) NSData * selfNATIP;
@property(copy) NSString * peerID;
@property(copy) NSData * peerPushToken;
@property(copy) NSNumber * peerNATType;
@property(copy) NSData * peerBlob;
@property(copy) NSData * peerNATIP;
@property(copy) NSNumber * relayType;
@property(copy) NSData * relayConnectionId;
@property(copy) NSData * relayTransactionIdAlloc;
@property(copy) NSData * relayTokenAllocReq;
@property(copy) NSData * selfRelayIP;
@property(copy) NSNumber * selfRelayPort;
@property(copy) NSData * peerRelayIP;
@property(copy) NSNumber * peerRelayPort;


- (id)bagKey;
- (id)peerRelayPort;
- (id)peerRelayIP;
- (id)selfRelayPort;
- (id)selfRelayIP;
- (id)relayTokenAllocReq;
- (id)relayTransactionIdAlloc;
- (id)relayConnectionId;
- (id)relayType;
- (void)setSelfNATIP:(id)arg1;
- (void)setPeerRelayPort:(id)arg1;
- (void)setPeerRelayIP:(id)arg1;
- (void)setSelfRelayPort:(id)arg1;
- (void)setSelfRelayIP:(id)arg1;
- (void)setRelayTokenAllocReq:(id)arg1;
- (void)setRelayTransactionIdAlloc:(id)arg1;
- (void)setRelayConnectionId:(id)arg1;
- (void)setRelayType:(id)arg1;
- (id)selfNATIP;
- (void)setSelfNATType:(id)arg1;
- (void)setSelfPushToken:(id)arg1;
- (id)selfNATType;
- (id)selfPushToken;
- (void)handleResponseDictionary:(id)arg1;
- (id)requiredKeys;
- (id)selfBlob;
- (void)setSelfBlob:(id)arg1;
- (id)peerNATType;
- (id)peerNATIP;
- (id)peerPushToken;
- (id)peerBlob;
- (void)setPeerBlob:(id)arg1;
- (void)setPeerNATIP:(id)arg1;
- (void)setPeerNATType:(id)arg1;
- (void)setPeerPushToken:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)setPeerID:(id)arg1;
- (id)peerID;
- (id)messageBody;

@end