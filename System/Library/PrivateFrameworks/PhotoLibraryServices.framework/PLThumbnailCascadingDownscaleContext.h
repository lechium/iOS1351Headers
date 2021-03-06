/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSLock;

@interface PLThumbnailCascadingDownscaleContext : NSObject {

	NSLock* _lock;
	FigCascadeContextRef _portraitContext;
	FigCascadeContextRef _landscapeContext;

}
-(id)init;
-(void)dealloc;
-(void)discardContexts;
-(BOOL)downscaleImageSurface:(IOSurfaceRef)arg1 destinationCount:(int)arg2 sizes:(SCD_Struct_PL27*)arg3 cropModes:(int*)arg4 pixelFormat:(unsigned)arg5 bytesPerRowAlignment:(int)arg6 destinationData:(id)arg7 ;
@end

