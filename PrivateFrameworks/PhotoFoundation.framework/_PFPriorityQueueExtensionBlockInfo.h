/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface _PFPriorityQueueExtensionBlockInfo : NSObject {
    id /* block */  _block;
    unsigned long long  _priority;
    unsigned int  _qos;
}

@property (readonly) id /* block */ block;
@property (readonly) unsigned long long priority;
@property (readonly) unsigned int qos;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithPriority:(unsigned long long)arg1 qos:(unsigned int)arg2 block:(id /* block */)arg3;
- (unsigned long long)priority;
- (unsigned int)qos;

@end
