/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol PLCloudChangeEventsResult <NSObject>
@property (readonly) long long resultType; 
@property (copy,readonly) NSString * currentTokenDescription; 
@required
-(long long)resultType;
-(void)enumerateLocalEventsWithBlock:(/*^block*/id)arg1;
-(NSString *)currentTokenDescription;

@end

