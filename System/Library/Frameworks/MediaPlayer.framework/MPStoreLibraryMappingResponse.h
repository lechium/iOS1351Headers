/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface MPStoreLibraryMappingResponse : NSObject {

	NSMutableDictionary* _storeIdentifierSetToLibraryIdentifierSet;
	long long _libraryAddedStatus;

}

@property (assign,nonatomic) long long libraryAddedStatus;              //@synthesize libraryAddedStatus=_libraryAddedStatus - In the implementation block
-(id)libraryIdentifierSetForIdentifierSet:(id)arg1 ;
-(void)setLibraryIdentifierSet:(id)arg1 forIdentifierSet:(id)arg2 ;
-(long long)libraryAddedStatus;
-(void)setLibraryAddedStatus:(long long)arg1 ;
@end
