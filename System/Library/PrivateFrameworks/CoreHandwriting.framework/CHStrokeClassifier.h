/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CHStrokeProvider;
#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class CHStrokeClassificationResult;

@interface CHStrokeClassifier : NSObject {

	BOOL _textOnly;
	id<CHStrokeProvider> _strokeProvider;
	CHStrokeClassificationResult* _strokeClassificationLastResult;

}

@property (nonatomic,retain,readonly) id<CHStrokeProvider> strokeProvider;                                        //@synthesize strokeProvider=_strokeProvider - In the implementation block
@property (nonatomic,retain,readonly) CHStrokeClassificationResult * strokeClassificationLastResult;              //@synthesize strokeClassificationLastResult=_strokeClassificationLastResult - In the implementation block
@property (nonatomic,readonly) BOOL textOnly;                                                                     //@synthesize textOnly=_textOnly - In the implementation block
+(id)nonTextCandidateForStroke:(id)arg1 withSubstrokes:(id)arg2 ;
+(double)containerSupportForPoints:(const vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 withBounds:(CGRect)arg2 ;
-(void)dealloc;
-(id<CHStrokeProvider>)strokeProvider;
-(id)updatedStrokeClassificationResultByAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 clutterFilter:(id)arg3 affectedClutterStrokeIDs:(id)arg4 cancellationBlock:(/*^block*/id)arg5 ;
-(id)initWithStrokeProvider:(id)arg1 strokeClassificationLastResult:(id)arg2 textOnly:(BOOL)arg3 ;
-(CHStrokeClassificationResult *)strokeClassificationLastResult;
-(BOOL)textOnly;
@end

