/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OCXReadState.h>

@protocol TCCancelDelegate;
@class NSMutableDictionary, OAXDrawingState, OAVReadState, OAXTableStyleCache, PDPresentation, CXNamespace;

@interface PXPresentationState : OCXReadState {

	NSMutableDictionary* mModelObjects;
	OAXDrawingState* mOfficeArtState;
	OAVReadState* mOAVState;
	OAXTableStyleCache* mTableStyleCache;
	NSMutableDictionary* mSlideURLToIndexMap;
	PDPresentation* mTgtPresentation;
	id<TCCancelDelegate> mCancel;
	CXNamespace* mPXPresentationMLNamespace;
	NSMutableDictionary* mCommentAuthorIdToIndexMap;

}

@property (nonatomic,retain) id<TCCancelDelegate> cancelDelegate; 
@property (nonatomic,readonly) NSMutableDictionary * commentAuthorIdToIndexMap; 
@property (nonatomic,retain) CXNamespace * PXPresentationMLNamespace; 
+(void)setPptChartGraphicPropertyDefaultBlock:(id)arg1 ;
-(id)init;
-(BOOL)isCancelled;
-(void)setupNSForXMLFormat:(int)arg1 ;
-(id)tableStyleCache;
-(id)oavState;
-(id)officeArtState;
-(void)setCancelDelegate:(id<TCCancelDelegate>)arg1 ;
-(id<TCCancelDelegate>)cancelDelegate;
-(CXNamespace *)PXPresentationMLNamespace;
-(id)tgtPresentation;
-(NSMutableDictionary *)commentAuthorIdToIndexMap;
-(void)setModelObject:(id)arg1 forLocation:(id)arg2 ;
-(void)setTgtPresentation:(id)arg1 ;
-(void)setSlideIndex:(long long)arg1 forSlideURL:(id)arg2 ;
-(void)setPXPresentationMLNamespace:(CXNamespace *)arg1 ;
-(long long)slideIndexForSlideURL:(id)arg1 ;
-(id)modelObjectForLocation:(id)arg1 ;
-(void)resetOfficeArtState;
@end

