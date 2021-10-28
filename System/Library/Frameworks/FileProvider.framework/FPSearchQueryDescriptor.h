/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FileProvider/FPSpotlightQueryDescriptor.h>

@class NSString;

@interface FPSearchQueryDescriptor : FPSpotlightQueryDescriptor {

	NSString* _searchQueryString;

}

@property (copy) NSString * searchQueryString;              //@synthesize searchQueryString=_searchQueryString - In the implementation block
-(unsigned long long)hash;
-(id)_scopes;
-(NSString *)searchQueryString;
-(void)setSearchQueryString:(NSString *)arg1 ;
-(id)queryStringForMountPoint:(id)arg1 ;
-(BOOL)keepCollectorsAlive;
-(void)augmentQueryContext:(id)arg1 ;
-(BOOL)isEqualToItemQueryDescriptor:(id)arg1 ;
@end
