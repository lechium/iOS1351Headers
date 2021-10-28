/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:44 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface NCNotificationExtensionCache : NSObject {

	NSMutableDictionary* _extensions;

}

@property (nonatomic,retain) NSMutableDictionary * extensions;              //@synthesize extensions=_extensions - In the implementation block
-(id)init;
-(NSMutableDictionary *)extensions;
-(void)setExtensions:(NSMutableDictionary *)arg1 ;
-(id)extensionForNotificationRequest:(id)arg1 ;
-(void)registerExtensions:(id)arg1 ;
-(id)_extensionMatchingSection:(id)arg1 category:(id)arg2 ;
-(void)_removeAllExtensions;
-(id)_categoriesForExtension:(id)arg1 ;
-(void)_addExtension:(id)arg1 ;
-(id)_customSectionIdentifiersForExtension:(id)arg1 ;
-(id)_sectionDictForSection:(id)arg1 ;
@end
