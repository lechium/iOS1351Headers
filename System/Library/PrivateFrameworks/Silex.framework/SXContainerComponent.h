/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXComponent.h>

@class SXJSONArray;

@interface SXContainerComponent : SXComponent

@property (nonatomic,readonly) SXJSONArray * allComponents; 
@property (nonatomic,readonly) SXJSONArray * components; 
@property (nonatomic,readonly) id<SXContentDisplay> contentDisplay; 
+(id)typeString;
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
+(/*^block*/id)objectValueClassBlockForPropertyWithName:(id)arg1 ;
+(/*^block*/id)purgeClassBlockForPropertyWithName:(id)arg1 ;
-(id<SXContentDisplay>)contentDisplay;
-(SXJSONArray *)components;
-(SXJSONArray *)allComponents;
@end

