//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCAudioStitchViewport : NSObject
{
    id <SCAudioStitch> _audioStitch;
    long long _row;
    long long _column;
}

- (void).cxx_destruct;
- (struct CGRect)playerFrameInBounds:(struct CGRect)arg1;
- (struct CGRect)innerRectForVideoSize:(struct CGSize)arg1;
- (id)initWithAudioStitch:(id)arg1 stitchSnap:(id)arg2;

@end

