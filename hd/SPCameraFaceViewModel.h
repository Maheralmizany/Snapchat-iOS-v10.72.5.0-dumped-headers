//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSValue;

@interface SPCameraFaceViewModel : NSObject
{
    _Bool _mouthClosed;
    _Bool _faceLooksStraight;
    _Bool _ignoreFaceLooksStraight;
    _Bool _faceInRect;
    NSValue *_maskRectOfInterest;
    struct CGRect _faceRectOfInterest;
}

@property(nonatomic) struct CGRect faceRectOfInterest; // @synthesize faceRectOfInterest=_faceRectOfInterest;
@property(retain, nonatomic) NSValue *maskRectOfInterest; // @synthesize maskRectOfInterest=_maskRectOfInterest;
@property(nonatomic) _Bool faceInRect; // @synthesize faceInRect=_faceInRect;
@property(nonatomic) _Bool ignoreFaceLooksStraight; // @synthesize ignoreFaceLooksStraight=_ignoreFaceLooksStraight;
@property(nonatomic) _Bool faceLooksStraight; // @synthesize faceLooksStraight=_faceLooksStraight;
@property(nonatomic) _Bool mouthClosed; // @synthesize mouthClosed=_mouthClosed;
- (void).cxx_destruct;

@end

