/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ActorKit.framework/ActorKit
 */

@class NSConditionLock, NSThread;

@interface AKDispatchQueue : NSObject  {
    int _kqueueFD;
    int _keventFDs[2];
    NSThread *_thread;
    union qed_queue_u { } *_queue;
    NSConditionLock *_runStateLock;
}

+ (id)newThreadRunLoopDispatchQueue;
+ (id)migrantDispatchQueue;
+ (id)currentRunLoopDispatchQueue;

- (void)dealloc;
- (id)init;
- (void)stop;
- (void)start;
- (union qed_queue_u { }*)queue;
- (void)switchToState:(id)arg1;
- (void)runThreadDispatchQueue:(id)arg1;
- (void)_afterStartedAddRunLoopSourceTo:(id)arg1;

@end