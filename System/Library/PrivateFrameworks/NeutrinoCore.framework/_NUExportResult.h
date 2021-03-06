/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUExportResult.h>

@class NSURL, NUImageGeometry, NSString;

@interface _NUExportResult : _NURenderResult <NUExportResult> {

	NSURL* _destinationURL;
	NUImageGeometry* _geometry;

}

@property (retain) NSURL * destinationURL;                           //@synthesize destinationURL=_destinationURL - In the implementation block
@property (retain) NUImageGeometry * geometry;                       //@synthesize geometry=_geometry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(void)setDestinationURL:(NSURL *)arg1 ;
-(NSURL *)destinationURL;
-(NUImageGeometry *)geometry;
-(void)setGeometry:(NUImageGeometry *)arg1 ;
@end

