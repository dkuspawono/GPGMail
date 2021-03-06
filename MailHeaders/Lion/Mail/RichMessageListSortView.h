/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSView.h"

@class SortBarButton;

@interface RichMessageListSortView : NSView
{
    SortBarButton *_sortButton;
    struct CGPoint _separatorOrigin;
    id _delegate;
}

+ (id)_sortBarButtonFontForControlSize:(unsigned long long)arg1;
- (unsigned long long)controlSize;
- (void)adjustHeight;
- (void)dealloc;
@property id delegate; // @synthesize delegate=_delegate;
- (void)setShowsSortButton:(BOOL)arg1;
- (void)setSortTitle:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

