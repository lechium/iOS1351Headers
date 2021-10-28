/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSMutableDictionary, NSString;

@interface OADTableStyleCollection : NSObject {

	NSMutableArray* _styles;
	NSMutableDictionary* _styleMap;
	NSString* _defaultTableStyleId;

}

@property (nonatomic,copy) NSString * defaultTableStyleId;              //@synthesize defaultTableStyleId=_defaultTableStyleId - In the implementation block
-(id)init;
-(void)addTableStyle:(id)arg1 ;
-(id)tableStyles;
-(id)tableStyleWithId:(id)arg1 ;
-(NSString *)defaultTableStyleId;
-(void)setDefaultTableStyleId:(NSString *)arg1 ;
@end
