/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol SASettingAppSettingCommand <SAAceSerializable,SAClientBoundCommand>
@property (nonatomic,copy) NSString * appWithSettingsId; 
@property (nonatomic,copy) NSString * location; 
@required
-(NSString *)location;
-(void)setLocation:(id)arg1;
-(NSString *)appWithSettingsId;
-(void)setAppWithSettingsId:(id)arg1;

@end

