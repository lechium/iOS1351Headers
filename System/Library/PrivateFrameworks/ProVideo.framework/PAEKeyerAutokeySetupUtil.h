/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@class PAEKeyerAutokeySetup, PAEKeyerHistogram;

@interface PAEKeyerAutokeySetupUtil : NSObject {

	id _apiManager;
	PAEKeyerAutokeySetup* _autokeySetup;
	PAEKeyerHistogram* _keyerHistogram;
	id _actionAPI;
	id _getAPI;
	id _setAPI;

}
-(void)dealloc;
-(void)setHistogram:(ColorHisto*)arg1 ;
-(void)syncWithDB;
-(id)initWithAPIManager:(id)arg1 ;
-(void)getDataFromDB;
-(id)getInitialSamples;
-(int)getSamplesNb;
-(Vec3f)getInitialSample:(int)arg1 ;
-(ColorHisto*)getHistogram;
-(void)syncWithDBAsDefault;
-(void)delInitialSample:(int)arg1 ;
-(void)clearInitialSamples;
-(void)addInitialSample:(Vec3f*)arg1 ;
-(void)fillAutokeySamplesArray:(vector<Vec3f, std::__1::allocator<Vec3f> >*)arg1 ;
@end
