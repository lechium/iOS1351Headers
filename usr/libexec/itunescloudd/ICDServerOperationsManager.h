//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ICDServerOperationsManager : NSObject
{
    _Bool _networkActivityIndicatorVisible;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    NSOperationQueue *_backgroundOperationQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000367c4
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) NSOperationQueue *backgroundOperationQueue; // @synthesize backgroundOperationQueue=_backgroundOperationQueue;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)_tearDownKVO;	// IMP=0x0000000100036748
- (void)_setupKVO;	// IMP=0x00000001000366dc
- (void)_setupInternalQueues;	// IMP=0x0000000100036610
@property(nonatomic, getter=isNetworkActivityIndicatorVisible) _Bool networkActivityIndicatorVisible; // @synthesize networkActivityIndicatorVisible=_networkActivityIndicatorVisible;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100036330
- (_Bool)cancelOperationsByClass:(Class)arg1;	// IMP=0x00000001000361dc
- (_Bool)hasOperationsOfClass:(Class)arg1;	// IMP=0x00000001000360ac
- (void)enumerateBackgroundOperationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100035f48
- (void)enumerateOperationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100035de4
- (void)addBackgroundOperation:(id)arg1 priority:(int)arg2;	// IMP=0x0000000100035d5c
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x0000000100035cd4
- (void)dealloc;	// IMP=0x0000000100035c88
- (id)init;	// IMP=0x0000000100035c20

@end
