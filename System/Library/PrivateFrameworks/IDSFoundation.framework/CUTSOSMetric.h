/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol CUTSOSMetric <CUTMetric>
@property (readonly) unsigned long long sosDomain; 
@property (readonly) unsigned long long sosType; 
@property (readonly) unsigned long long sosError; 
@property (readonly) NSString * operationID; 
@required
-(NSString *)operationID;
-(unsigned long long)sosDomain;
-(unsigned long long)sosType;
-(unsigned long long)sosError;

@end
