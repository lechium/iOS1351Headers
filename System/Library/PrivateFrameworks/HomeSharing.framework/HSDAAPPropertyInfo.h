/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface HSDAAPPropertyInfo : NSObject {

	NSMutableDictionary* _codeMap;
	NSMutableDictionary* _valueTypeMap;

}

@property (nonatomic,retain) NSMutableDictionary * codeMap;                   //@synthesize codeMap=_codeMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * valueTypeMap;              //@synthesize valueTypeMap=_valueTypeMap - In the implementation block
+(id)sharedContainerPropertyInfo;
+(id)sharedItemPropertyInfo;
-(id)_init;
-(NSMutableDictionary *)codeMap;
-(BOOL)hasInfoForProperty:(id)arg1 ;
-(void)mapProperty:(id)arg1 toCode:(unsigned)arg2 valueType:(long long)arg3 ;
-(unsigned)elementCodeForProperty:(id)arg1 ;
-(long long)valueTypeForProperty:(id)arg1 ;
-(void)setCodeMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)valueTypeMap;
-(void)setValueTypeMap:(NSMutableDictionary *)arg1 ;
@end

