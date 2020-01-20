//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCComposerMediaImageProtocol.h"

@class NSString, UIImage;

@interface SCComposerMediaImage : NSObject <SCComposerMediaImageProtocol>
{
    UIImage *_image;
}

@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (void)dispose;
- (void)getPngDataWithCallback:(CDUnknownBlockType)arg1;
- (void)rotateWithAngle:(double)arg1 callback:(CDUnknownBlockType)arg2;
- (void)cropWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 callback:(CDUnknownBlockType)arg5;
- (void)resizeWithWidth:(double)arg1 height:(double)arg2 callback:(CDUnknownBlockType)arg3;
- (double)getHeight;
- (double)getWidth;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
