/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _MKKVOProxyDelegate;
@interface _MKKVOProxy : NSObject {

	id<_MKKVOProxyDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_MKKVOProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_MKKVOProxyDelegate>)delegate;
-(void)setDelegate:(id<_MKKVOProxyDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)removeObserverForObject:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)addObserverForObject:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserverForObject:(id)arg1 forKeyPath:(id)arg2 ;
@end

