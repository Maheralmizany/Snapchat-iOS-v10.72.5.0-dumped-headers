//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface SPGlyph : NSObject
{
    UIImage *_image;
    double _advance;
    struct CGRect _rect;
}

@property(readonly, nonatomic) double advance; // @synthesize advance=_advance;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 rect:(struct CGRect)arg2 advance:(double)arg3;

@end
