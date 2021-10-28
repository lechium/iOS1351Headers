/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:19 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSArray;


@protocol SALibraryCache <NSObject>
@property (readonly) NSUUID * uuid; 
@property (readonly) NSArray * binaryLoadInfos; 
@property (readonly) unsigned long long textSegmentsStartAddress; 
@property (readonly) unsigned long long textSegmentsEndAddress; 
@required
-(NSUUID *)uuid;
-(NSArray *)binaryLoadInfos;
-(unsigned long long)textSegmentsStartAddress;
-(unsigned long long)textSegmentsEndAddress;

@end
