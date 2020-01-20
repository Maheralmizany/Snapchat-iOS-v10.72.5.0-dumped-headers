//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class SCUserSession, UIImageView;

@interface SCGallerySnapCollectionViewCell : UICollectionViewCell
{
    id <SCGallerySnap> _gallerySnap;
    SCUserSession *_userSession;
    UIImageView *_imageView;
    id <SCCachingMediaRequest> _mediaRequest;
}

@property(retain, nonatomic) id <SCCachingMediaRequest> mediaRequest; // @synthesize mediaRequest=_mediaRequest;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) __weak id <SCGallerySnap> gallerySnap; // @synthesize gallerySnap=_gallerySnap;
- (void).cxx_destruct;
- (void)setImage:(id)arg1;
- (void)setupOverlayView;
- (void)setGallerySnap:(id)arg1 withUserSession:(id)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

