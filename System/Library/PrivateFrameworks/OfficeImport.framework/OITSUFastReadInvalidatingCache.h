/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCondition;

@interface OITSUFastReadInvalidatingCache : NSObject {

	/*^block*/id mGenerator;
	A@ mValue;
	Aq mReaderCount;
	A@ mToDispose;
	BOOL mReentrant;
	NSCondition* mCondition;
	BOOL mIsGenerating;

}
-(void)dealloc;
-(void)invalidate;
-(id)value;
-(void)p_setValue:(id)arg1 ;
-(id)initForReentrant:(BOOL)arg1 withGenerator:(/*^block*/id)arg2 ;
@end
