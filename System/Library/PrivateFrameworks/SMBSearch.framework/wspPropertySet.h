/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SMBSearch/SMBSearch-Structs.h>
@class NSMutableArray;

@interface wspPropertySet : NSObject {

	network_uuid propSetGuid;
	int _propsetID;
	NSMutableArray* _propArr;

}

@property (assign) int propsetID;                         //@synthesize propsetID=_propsetID - In the implementation block
@property (retain) NSMutableArray * propArr;              //@synthesize propArr=_propArr - In the implementation block
-(void)addProperty:(id)arg1 ;
-(unsigned long long)propertyCount;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(NSMutableArray *)propArr;
-(int)propsetID;
-(id)initWithPropSetID:(int)arg1 ;
-(id)propertyForPropID:(unsigned)arg1 ;
-(void)setPropsetID:(int)arg1 ;
-(void)setPropArr:(NSMutableArray *)arg1 ;
@end
