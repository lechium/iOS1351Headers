/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BSProtobufSchemaBuilder <NSObject>
@required
-(void)addField:(const char*)arg1 forTag:(long long)arg2;
-(void)addField:(const char*)arg1;
-(void)addField:(const char*)arg1 allowedClasses:(id)arg2;
-(void)addRepeatingField:(const char*)arg1 containsClass:(Class)arg2;
-(void)addRepeatingField:(const char*)arg1 containsClasses:(id)arg2;
-(void)addRepeatingField:(const char*)arg1 containsClass:(Class)arg2 forTag:(long long)arg3;

@end

