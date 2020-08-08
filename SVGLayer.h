/*
 * This file is part of the PocketSVG package.
 * Copyright (c) Ponderwell, Ariel Elkin, Fjölnir Ásgeirsson, and Contributors
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <QuartzCore/QuartzCore.h>

NS_ASSUME_NONNULL_BEGIN

@class SVGBezierPath;

/*!
 * @brief A CALayer subclass that renders an SVG file.
 *
 */
@interface SVGLayer : CALayer


/*!
 * @brief Initialises a layer that renders the SVG file at the URL.
 *
 * @param url The URL of the SVG file.
 *
 */
- (instancetype)initWithContentsOfURL:(NSURL *)url;


/*!
 * @brief The SVG paths the layer should draw.
 *
 */
@property (nonatomic, copy) NSArray<SVGBezierPath*> *paths;


/*!
 * @brief A color to fill the SVG shape with.
 *
 * @discussion Setting this property solidly fills the shape formed by the SVG path with the given color.
 *
 */
@property(nonatomic, nullable) CGColorRef fillColor;



/*!
 * @brief The color to stroke the path with.
 *
 * @discussion Setting this property solidly colors the path generated by the SVG file.
 *
 */
@property(nonatomic, nullable) CGColorRef strokeColor;


/*!
 * @brief Specifies whether line thickness should be scaled when scaling paths.
 *
 */
@property(nonatomic) BOOL scaleLineWidth;

@end
NS_ASSUME_NONNULL_END
