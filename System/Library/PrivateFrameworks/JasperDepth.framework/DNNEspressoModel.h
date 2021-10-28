/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:39 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <JasperDepth/JasperDepth-Structs.h>
@interface DNNEspressoModel : NSObject {

	int _engine;
	int _storage;
	void* _plan;
	void* _ctx;
	SCD_Struct_DN62* _net;

}

@property (assign,nonatomic) int engine;                        //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic) void* plan;                        //@synthesize plan=_plan - In the implementation block
@property (assign,nonatomic) void* ctx;                         //@synthesize ctx=_ctx - In the implementation block
@property (assign,nonatomic) SCD_Struct_DN62* net;              //@synthesize net=_net - In the implementation block
@property (assign) int storage;                                 //@synthesize storage=_storage - In the implementation block
-(void)dealloc;
-(int)storage;
-(int)engine;
-(void)setStorage:(int)arg1 ;
-(void*)ctx;
-(void)setCtx:(void*)arg1 ;
-(void*)plan;
-(void)setEngine:(int)arg1 ;
-(void)setPlan:(void*)arg1 ;
-(SCD_Struct_DN62*)net;
-(BOOL)initializeInputOutputBlobs;
-(BOOL)loadNetworkWithName:(id)arg1 runningMode:(long long)arg2 ;
-(void)setNet:(SCD_Struct_DN62*)arg1 ;
@end
