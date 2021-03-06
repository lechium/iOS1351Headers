/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:01 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PSIGroup;

@interface PSIRankedGroup : NSObject {

	PSIGroup* _group;
	double _score;

}

@property (nonatomic,readonly) PSIGroup * group;              //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) double score;                    //@synthesize score=_score - In the implementation block
-(double)score;
-(void)setScore:(double)arg1 ;
-(PSIGroup *)group;
-(id)initWithGroup:(id)arg1 score:(double)arg2 ;
@end

