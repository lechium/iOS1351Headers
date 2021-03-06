/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BUEncodedBlockInfo.h>

@class NSString;

@interface BUEncodedBlockInfoInternal : NSObject <BUEncodedBlockInfo> {

	unsigned long long _encodedLength;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long encodedLength;              //@synthesize encodedLength=_encodedLength - In the implementation block
@property (nonatomic,readonly) unsigned long long decodedLength; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)encodedLength;
-(unsigned long long)decodedLength;
-(id)initWithEncodedLength:(unsigned long long)arg1 ;
@end

