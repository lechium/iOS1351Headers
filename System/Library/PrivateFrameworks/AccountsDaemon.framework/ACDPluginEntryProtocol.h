/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSSet, NSString;


@protocol ACDPluginEntryProtocol
@property (nonatomic,readonly) NSSet * supportedAccountTypes; 
@property (nonatomic,readonly) NSSet * supportedDataclasses; 
@property (nonatomic,readonly) id principalObject; 
@property (nonatomic,readonly) NSString * identifier; 
@required
-(NSString *)identifier;
-(NSSet *)supportedDataclasses;
-(id)principalObject;
-(BOOL)principalObjectRespondsToSelector:(SEL)arg1;
-(NSSet *)supportedAccountTypes;

@end

