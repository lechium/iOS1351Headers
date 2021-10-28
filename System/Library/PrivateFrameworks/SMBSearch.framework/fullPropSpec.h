/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SMBSearch/SMBSearch-Structs.h>
@interface fullPropSpec : NSObject {

	network_uuid propGuid;
	int _propNumber;
	unsigned _ulKind;
	unsigned _propID;

}

@property (assign) int propNumber;               //@synthesize propNumber=_propNumber - In the implementation block
@property (assign) unsigned ulKind;              //@synthesize ulKind=_ulKind - In the implementation block
@property (assign) unsigned propID;              //@synthesize propID=_propID - In the implementation block
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(int)propNumber;
-(void)setPropNumber:(int)arg1 ;
-(id)initWithPropertyNumber:(int)arg1 ;
-(unsigned)ulKind;
-(void)setUlKind:(unsigned)arg1 ;
-(unsigned)propID;
-(void)setPropID:(unsigned)arg1 ;
@end
