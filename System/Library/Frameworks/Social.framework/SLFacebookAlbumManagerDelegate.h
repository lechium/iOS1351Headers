/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Social.framework/Social
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SLFacebookAlbumManagerDelegate
@required
-(void)albumManager:(id)arg1 didRefreshAlbums:(id)arg2;
-(void)albumManager:(id)arg1 didFailAlbumRefreshWithError:(id)arg2;
-(void)albumManager:(id)arg1 didLoadCoverImage:(id)arg2 forAlbum:(id)arg3;
-(void)albumManager:(id)arg1 didFailLoadingCoverImageForAlbum:(id)arg2 withError:(id)arg3;

@end
