/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:45 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSString;


@protocol UAPasteboardItemProviding <NSObject>
@property (nonatomic,copy) NSUUID * uuid; 
@property (nonatomic,copy) NSString * type; 
@required
-(NSString *)type;
-(void)setType:(id)arg1;
-(NSUUID *)uuid;
-(void)setUuid:(id)arg1;
-(void)getDataWithCompletionBlock:(/*^block*/id)arg1;

@end

