/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MusicLibrary/MusicLibrary-Structs.h>
@class ML3MusicLibrary;

@interface ML3SpotlightNameCache : NSObject {

	unordered_map<long long, NSString *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, NSString *> > >* _map;
	BOOL _idle;
	ML3MusicLibrary* _library;

}
+(void)initialize;
+(id)copyFromLibrary:(id)arg1 cancelHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)_initWithLibrary:(id)arg1 cancelHandler:(/*^block*/id)arg2 ;
@end

