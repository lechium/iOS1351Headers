/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NTKSafeLocketReaderDelegate;
@class NSString, NPTOLocket;

@interface NTKSafeLocketReader : NSObject {

	NSString* _defaultPhotoPath;
	BOOL _isPhotoLibraryAvailable;
	NPTOLocket* _locket;
	id<NTKSafeLocketReaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NTKSafeLocketReaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL firstUnlockHasOccurred; 
@property (nonatomic,readonly) unsigned long long numberOfLoadedPhotos; 
@property (nonatomic,readonly) unsigned long long numberOfTotalPhotos; 
@property (nonatomic,readonly) NPTOLocket * locket;                                        //@synthesize locket=_locket - In the implementation block
-(id<NTKSafeLocketReaderDelegate>)delegate;
-(void)setDelegate:(id<NTKSafeLocketReaderDelegate>)arg1 ;
-(id)title;
-(id)subtitle;
-(long long)keyAssetIndex;
-(unsigned long long)numberOfLoadedPhotos;
-(unsigned long long)numberOfTotalPhotos;
-(void)loadPhotoAtIndex:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfPhotoWithIdentifier:(id)arg1 ;
-(id)initWithDefaultPhotoPath:(id)arg1 ;
-(BOOL)firstUnlockHasOccurred;
-(id)remoteCollectionIdentifier;
-(NPTOLocket *)locket;
@end
