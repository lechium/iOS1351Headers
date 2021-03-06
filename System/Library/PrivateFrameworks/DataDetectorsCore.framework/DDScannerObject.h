/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:55 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@interface DDScannerObject : NSObject {

	DDScannerRef _scanner;
	int _type;
	BOOL _hasBasicType;
	long long _jobIdentifier;

}

@property (assign,nonatomic) long long jobIdentifier;              //@synthesize jobIdentifier=_jobIdentifier - In the implementation block
-(void)dealloc;
-(int)type;
-(void)cancel;
-(id)initWithType:(int)arg1 enableParsec:(BOOL)arg2 ;
-(BOOL)hasBasicType;
-(id)scanString:(id)arg1 range:(SCD_Struct_DD1)arg2 query:(DDScanQueryRef)arg3 configuration:(id)arg4 ;
-(long long)jobIdentifier;
-(void)setJobIdentifier:(long long)arg1 ;
@end

