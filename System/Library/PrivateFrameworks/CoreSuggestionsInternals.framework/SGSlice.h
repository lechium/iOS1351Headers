/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@interface SGSlice : NSObject {

	SCD_Struct_SG11 _type;
	unsigned long long _start;
	unsigned long long _end;

}

@property (nonatomic,readonly) SCD_Struct_SG11 type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long start;              //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) unsigned long long end;                //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) NSRange range; 
+(id)sliceWithType:(SCD_Struct_SG11)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3 ;
+(id)sliceWithType:(SCD_Struct_SG11)arg1 range:(NSRange)arg2 ;
-(id)description;
-(SCD_Struct_SG11)type;
-(long long)compare:(id)arg1 ;
-(unsigned long long)start;
-(NSRange)range;
-(unsigned long long)end;
-(id)initWithType:(SCD_Struct_SG11)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3 ;
-(id)initWithType:(SCD_Struct_SG11)arg1 range:(NSRange)arg2 ;
@end
