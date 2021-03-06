/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PXNewMagazineRectArray;

@interface PXNewMagazineChunk : NSObject {

	long long _startIndexOfInputs;
	long long _startY;
	unsigned long long _numOfRects;
	PXNewMagazineRectArray* _rectsArray;
	unsigned long long _height;

}

@property (nonatomic,readonly) long long startIndexOfInputs;                     //@synthesize startIndexOfInputs=_startIndexOfInputs - In the implementation block
@property (nonatomic,readonly) long long startY;                                 //@synthesize startY=_startY - In the implementation block
@property (nonatomic,readonly) unsigned long long numOfRects;                    //@synthesize numOfRects=_numOfRects - In the implementation block
@property (nonatomic,readonly) PXNewMagazineRectArray * rectsArray;              //@synthesize rectsArray=_rectsArray - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                        //@synthesize height=_height - In the implementation block
-(unsigned long long)height;
-(id)initWithStartY:(long long)arg1 startIndexOfInputs:(long long)arg2 rectsArray:(id)arg3 ;
-(long long)startIndexOfInputs;
-(long long)startY;
-(unsigned long long)numOfRects;
-(PXNewMagazineRectArray *)rectsArray;
@end

