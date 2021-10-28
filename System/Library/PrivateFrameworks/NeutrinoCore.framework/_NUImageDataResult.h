/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUImageDataResult.h>

@class NSDictionary, NUImageGeometry, NSString;

@interface _NUImageDataResult : _NURenderResult <NUImageDataResult> {

	NSDictionary* _data;
	NUImageGeometry* _geometry;

}

@property (copy) NSDictionary * data;                                //@synthesize data=_data - In the implementation block
@property (retain) NUImageGeometry * geometry;                       //@synthesize geometry=_geometry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(NSString *)description;
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
-(NUImageGeometry *)geometry;
-(void)setGeometry:(NUImageGeometry *)arg1 ;
@end
