/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AccessoryNavigation.framework/AccessoryNavigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface ACCNavigationLaneGuidanceInfo : NSObject {

	NSMutableDictionary* _infoDict;

}

@property (retain) NSMutableDictionary * infoDict;              //@synthesize infoDict=_infoDict - In the implementation block
+(id)keyForType:(unsigned short)arg1 ;
-(id)init;
-(id)copyDictionary;
-(BOOL)_checkDataClassForType:(unsigned short)arg1 data:(id)arg2 ;
-(id)copyInfo:(unsigned short)arg1 ;
-(BOOL)setInfo:(unsigned short)arg1 data:(id)arg2 ;
-(NSMutableDictionary *)infoDict;
-(void)setInfoDict:(NSMutableDictionary *)arg1 ;
@end

