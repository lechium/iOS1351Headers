//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol CNReaderWriterScheduler, CNScheduler;

@protocol CNSchedulerProvider <NSObject>
- (id <CNReaderWriterScheduler>)newReaderWriterSchedulerWithName:(NSString *)arg1;
- (id <CNScheduler>)newSynchronousSerialSchedulerWithName:(NSString *)arg1;
- (id <CNScheduler>)newSerialSchedulerWithName:(NSString *)arg1;
@property(nonatomic, readonly) id <CNScheduler> immediateScheduler;
@property(nonatomic, readonly) id <CNScheduler> inlineScheduler;
@property(nonatomic, readonly) id <CNScheduler> mainThreadScheduler;
- (id <CNScheduler>)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;
@property(nonatomic, readonly) id <CNScheduler> backgroundScheduler;
@end

