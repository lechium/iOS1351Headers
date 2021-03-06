//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, Protocol;

@protocol NSObject
@property(nonatomic, readonly) NSString *description;
- (void *)zone;
- (long long)retainCount;
- (id)autorelease;
- (void)release;
- (id)retain;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id *)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id *)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id *)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
@property(nonatomic, readonly) Class superclass;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;

@optional
@property(nonatomic, readonly) NSString *debugDescription;
@end

