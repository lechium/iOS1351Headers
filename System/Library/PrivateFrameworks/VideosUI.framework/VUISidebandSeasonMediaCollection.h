/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUIMediaCollection.h>

@class VUITVSeasonManagedObject;

@interface VUISidebandSeasonMediaCollection : VUIMediaCollection {

	VUITVSeasonManagedObject* _seasonManagedObject;

}

@property (nonatomic,retain) VUITVSeasonManagedObject * seasonManagedObject;              //@synthesize seasonManagedObject=_seasonManagedObject - In the implementation block
-(id)title;
-(id)isLocal;
-(id)seasonNumber;
-(id)canonicalID;
-(id)HLSColorCapability;
-(id)colorCapability;
-(id)showIdentifier;
-(id)initWithMediaLibrary:(id)arg1 seasonManagedObject:(id)arg2 requestedProperties:(id)arg3 ;
-(VUITVSeasonManagedObject *)seasonManagedObject;
-(void)setSeasonManagedObject:(VUITVSeasonManagedObject *)arg1 ;
@end

