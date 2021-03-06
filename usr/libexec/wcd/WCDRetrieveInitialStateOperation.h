//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSOperationQueue;
@protocol WCDOperationDelegate;

@interface WCDRetrieveInitialStateOperation : NSOperation
{
    _Bool _failed;	// 8 = 0x8
    id <WCDOperationDelegate> _delegate;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000b6a4
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property _Bool failed; // @synthesize failed=_failed;
@property(readonly, nonatomic) __weak id <WCDOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)main;	// IMP=0x000000010000b0b4
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000010000afec

@end

