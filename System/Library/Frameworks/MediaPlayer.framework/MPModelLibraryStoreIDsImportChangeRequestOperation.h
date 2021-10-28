/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibrary, MPModelObject, NSArray;

@interface MPModelLibraryStoreIDsImportChangeRequestOperation : MPAsyncOperation {

	BOOL _shouldLibraryAdd;
	MPMediaLibrary* _mediaLibrary;
	MPModelObject* _referralObject;
	NSArray* _storeIDs;
	/*^block*/id _responseHandler;

}

@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;               //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) MPModelObject * referralObject;              //@synthesize referralObject=_referralObject - In the implementation block
@property (nonatomic,copy) NSArray * storeIDs;                            //@synthesize storeIDs=_storeIDs - In the implementation block
@property (assign,nonatomic) BOOL shouldLibraryAdd;                       //@synthesize shouldLibraryAdd=_shouldLibraryAdd - In the implementation block
@property (nonatomic,copy) id responseHandler;                            //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(MPModelObject *)referralObject;
-(void)setReferralObject:(MPModelObject *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(BOOL)shouldLibraryAdd;
-(void)setShouldLibraryAdd:(BOOL)arg1 ;
-(NSArray *)storeIDs;
-(void)setStoreIDs:(NSArray *)arg1 ;
@end
