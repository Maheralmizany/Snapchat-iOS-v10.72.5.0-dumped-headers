//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCSpectaclesBoomboxData : NSObject
{
    id <SCGallerySnap> _snap;
    id <SCGalleryEntry> _entry;
}

@property(readonly, nonatomic) id <SCGalleryEntry> entry; // @synthesize entry=_entry;
@property(readonly, nonatomic) id <SCGallerySnap> snap; // @synthesize snap=_snap;
- (void).cxx_destruct;
- (id)initWithSnap:(id)arg1 entry:(id)arg2;

@end
